#include "Man.h"



Man::Man(u_int8_t a,u_int8_t wh,u_int8_t st,char *nam):age{a},working_hours{wh},sleep_time{st}
{
name = new char(strlen(nam)+1);
strcpy(name,nam);
}





