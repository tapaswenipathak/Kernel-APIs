#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "list.h"

struct foo {
	int info;
	struct list_head list_member;
};

void list_add(struct list_head *new, struct_list *head);

void add_node(int arg, struct list_head *head)
{
    struct foo *fooPtr = (struct foo *)malloc(sizeof(struct foo));
    assert(fooPtr != NULL);

    fooPtr->info = arg;
    INIT_LIST_HEAD(&fooPtr->list_member);
    list_add(&fooPtr->list_member, head);
}

void list_add_tail(struct list_head *new, struct list_head *head)
{

}

void list_add_tail(struct list_head *new, struct list_head *head);
void __list_del_entry(struct list_head *entry);
void list_replace(struct list_head *old, struct list_head *new);
void list_del_init(struct list_head *entry);
void list_move(struct list_head *list, struct list_head *head);
void list_move_tail(struct list_head *list,	struct list_head *head);
void list_is_last(const struct list_head *list, const struct list_head *head);
int list_empty(const struct list_head *head);
int list_empty_careful(const struct list_head *head);
void list_rotate_left(struct list_head *head);
int list_is_singulr(const struct list_head *head);
void list_cut_position(struct list_head *list, struct list_head *head, struct list_head *entry);
void list_splice(const struct list_head *list, struct list_head *head);
void list_splice_tail(struct list_head *list, struct list_head *head);
void list_splice_init(struct list_head *list, struct list_head *head);
void list_splice_tail_init(struct list_head *list, struct list_head *head);
void list_entry(ptr, type, member);
void list_first_entry(ptr, type, member);
void list_last_entry(ptr, type, member);
void list_first_entry_or_null(ptr, type, member);
void list_next_entry(pos, member);
void list_prev_entry(pos, member);
void list_for_each(pos, head);
void list_for_each_prev(pos, head);
void list_for_each_safe(pos, n, head);
void list_for_each_prev_safe(pos, n, head);
void list_for_each_entry(pos, head, member);
void list_for_each_entry_reverse(pos, head, member);
void list_prepare_entry(pos, head, member);
void list_for_each_entry_continue(pos, head, member);
void list_for_each_entry_continue_reverse(pos, head, member);
void list_for_each_entry_from(pos, head, member);
void list_for_each_entry_from_reverse(pos, head, member);
void list_for_each_entry_safe(pos, n, head, member);
void list_for_each_entry_safe_continue(pos, n, head, member);
void list_for_each_entry_safe_room(pos, n, head, member);
void list_for_each_entry_safe_reverse(pos, n, head, member);
void list_safe_reset_next(pos, n, member);
void hlist_for_each_entry(pos, head, member);
void hlist_for_each_entry_continue(pos, member);
void hlist_for_each_entry_from(pos, member);
void hlist_for_each_entry_safe(pos, n, head, member);

void list_add_tail(int arg, struct list_head *head);
void list_replace(struct list_head *prev, struct list_head *head);
void list_del_init(struct list *head);
void list_empty(struct list *empty);
void list_for_each(int arg, struct list *head);
void list_for_each_prev(int arg, struct list *head);
void list_for_each_entry(int arg, struct list *head);

void add_node(int arg, struct list_head *head)
{
    struct foo *fooPtr = (struct foo *)malloc(sizeof(struct foo));
    assert(fooPtr != NULL);

    fooPtr->info = arg;
    INIT_LIST_HEAD(&fooPtr->list_member);
    list_add(&fooPtr->list_member, head);
}

void display(struct list_head *head)
{
    struct list_head *iter;
    struct foo *objPtr;

    __list_for_each(iter, head) {
        objPtr = list_entry(iter, struct foo, list_member);
        printf("%d ", objPtr->info);
    }
    printf("\n");
}

void delete_all(struct list_head *head)
{
    struct list_head *iter;
    struct foo *objPtr;

  redo:
    __list_for_each(iter, head) {
        objPtr = list_entry(iter, struct foo, list_member);
        list_del(&objPtr->list_member);
        free(objPtr);
        goto redo;
    }
}

int find_first_and_delete(int arg, struct list_head *head)
{
    struct list_head *iter;
    struct foo *objPtr;

    __list_for_each(iter, head) {
        objPtr = list_entry(iter, struct foo, list_member);
        if(objPtr->info == arg) {
            list_del(&objPtr->list_member);
            free(objPtr);
            return 1;
        }
    }

    return 0;
}


int main()
{
    LIST_HEAD(fooHead);
    LIST_HEAD(barHead);

    add_node(1, &fooHead);
    add_node(2, &fooHead);
    add_node(3, &fooHead);
    add_node(4, &fooHead);
    add_node(5, &fooHead);
    add_node(6, &fooHead);
    add_node(7, &fooHead);
    add_node(8, &fooHead);
    add_node(9, &fooHead);

    display(&fooHead);
    display(&fooHead);
    delete_all(&fooHead);
    display(&fooHead);
}
