#ifndef DIVELIST_H
#define DIVELIST_H

struct dive;

extern void dive_list_update_dives(void);
extern void update_dive_list_col_visibility(void);
extern void update_dive_list_units(void);
extern void flush_divelist(struct dive *);
extern void update_cylinder_related_info(struct dive *);
extern void mark_divelist_changed(int);
extern int unsaved_changes(void);
#endif
