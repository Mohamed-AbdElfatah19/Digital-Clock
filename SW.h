#ifndef __SW_H__
#define __SW_H__

/*PB type */
typedef enum
{
    SW_PLUS,
    SW_MINUS,
    SW_SET
}tSW ;

/*PB state */
typedef enum // S tate Type
{
    SW_RELEASED,
    SW_PRE_PRESSED,
    SW_PRESSED,
    SW_PRE_RELEASED
}tSW_State;

/*initialize PB with PB_state ==> initialization */
void SW_Init(void);
/*get PB's PB state ==> function */
tSW_State SW_GetState(tSW sw);
/*update PB's PB state ==> periodic task */
void SW_Update(void);

#endif // __SW_H__
