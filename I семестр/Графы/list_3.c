#include <stdio.h>
#include <stdlib.h>


struct card {
	int value;
	struct card * next;
	struct card * prev;
};


struct player {
	struct card * first;
	struct card * last;
	int card_num;
};


struct player p1, p2;
int time;


void card_reading(void) {
	int i;
	struct card * cur;

	cur = (struct card *)malloc(sizeof(struct card));
	(*cur).prev = NULL;
	(*cur).next = NULL;
	scanf("%d", &((*cur).value));
	p1.first = cur;
	p1.last = cur;
	for (i = 0; i < 4; i++) {
		cur = (struct card *)malloc(sizeof(struct card));
        	(*cur).prev = p1.last;
        	(*cur).next = NULL;
		(*p1.last).next = cur;
		scanf("%d", &((*cur).value));
		p1.last = cur;
	}
	p1.card_num = 5;

	cur = (struct card *)malloc(sizeof(struct card));
        (*cur).prev = NULL;
        (*cur).next = NULL;
        scanf("%d", &((*cur).value));
        p2.first = cur;
        p2.last = cur;
        for (i = 0; i < 4; i++) {
                cur = (struct card *)malloc(sizeof(struct card));
                (*cur).prev = p2.last;
                (*cur).next = NULL;
		(*p2.last).next = cur;
                scanf("%d", &((*cur).value));
                p2.last = cur;
        }
	p2.card_num = 5;
}

void p1_win(void) {
	if (p2.card_num == 0) {
                printf("second %d", time);
		exit(0);
        }
	p1.card_num++;
	p2.card_num--;
	printf("p1 win\n");
	(*p1.last).next = p1.first;
	p1.first = (*p1.first).next;
	(*p1.first).prev = NULL;
	(*(*p1.last).next).prev  = p1.last;
	p1.last =  (*p1.last).next;
	(*p1.last).next = p2.first;
	(*p2.first).prev = p1.last;
	p2.first = (*p2.first).next;
	(*p2.first).prev =  NULL;
	(*p1.last).next = NULL;
}


void p2_win(void) {
	p2.card_num++;
	p1.card_num--;
	if (p2.card_num == 10) {
		printf("second %d", time);
		exit(0);
	}
	printf("p2 win\n");
	(*p2.last).next = p1.first;
	printf("0\n");
	(*p1.first).prev = p2.last;
	p1.first = (*p1.first).next;
	(*p1.first).prev = NULL;
	p2.last = (*p2.last).next;
	printf("1\n");
	(*p2.first).prev = p2.last;
	(*p2.last).next = p2.first;
	p2.first = (*p2.first).next;
	(*p2.first).prev = NULL;
	p2.last = (*p2.last).next;
	(*p2.last).next = NULL;
}


int main(void) {
	card_reading();
	int time = 0;
	while(time < 1000000 && p1.first != NULL && p2.first != NULL) {
		time++;
		if ((*p1.first).value > (*p2.first).value)
			p1_win();
		else
			p2_win();
	}
	printf("%d\n", time);

	return 0;
}
