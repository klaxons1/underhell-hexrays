char sub_102F2730()
{
  char result; // al

  sub_1004BBC0(&dword_106E2628, (int)"CNewNPC", (int)dword_10690E5C, (int)&dword_10690E10);
  sub_1007DAB0(dword_106E2674, (int)dword_1069528C, (int)&unk_10690E74);
  result = sub_1007DB90(dword_106E2644, (int)"TASK_MYCUSTOMTASK", 150, "task", off_10669B74);
  if ( result )
  {
    result = sub_1007DB90(dword_106E262C, (int)"SCHED_MYCUSTOMSCHEDULE", 88, "schedule", off_10669B74);
    if ( result )
    {
      dword_10669B68 = sub_100032E0((int)"ACT_MYCUSTOMACTIVITY");
      sub_10008F60((int)"ACT_MYCUSTOMACTIVITY", dword_10669B68);
      return sub_1007DB90(dword_106E265C, (int)"COND_MYCUSTOMCONDITION", 73, "condition", off_10669B74);
    }
  }
  return result;
}
