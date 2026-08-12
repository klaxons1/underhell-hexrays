void __usercall sub_10027E70(float *a1@<ecx>, int a2@<edi>)
{
  const char *v3; // eax
  unsigned int v4; // eax
  int v5; // eax
  const char *v6; // edi
  const char *v7; // eax
  int v8; // eax
  const char *v9; // eax
  _DWORD *v10; // eax
  int v11; // eax
  float *v12; // edi
  const char *v13; // eax
  int v14; // eax
  const char *v15; // eax
  float v17[3]; // [esp+14h] [ebp-Ch] BYREF

  v3 = (const char *)*((_DWORD *)a1 + 23);
  if ( !v3 )
    v3 = String;
  DevMsg("%s: ", v3);
  v4 = *((_DWORD *)a1 + 581);
  if ( v4 < 7 )
    DevMsg("State: %s, ", off_105FE4BC[v4]);
  v5 = *((_DWORD *)a1 + 593);
  if ( v5 != -1 && *((_DWORD *)a1 + 595) != -1 )
  {
    v6 = sub_10008F90(v5);
    v7 = sub_10008F90(*((_DWORD *)a1 + 595));
    DevMsg("Activity: %s  -  Ideal Activity: %s\n", v6, v7);
  }
  v8 = *((_DWORD *)a1 + 531);
  if ( v8 )
  {
    v9 = *(const char **)(v8 + 44);
    if ( !v9 )
      v9 = "Unknown";
    DevMsg("Schedule %s, ", v9);
    v10 = (_DWORD *)sub_10043EC0(a1);
    if ( v10 )
      DevMsg("Task %d (#%d), ", *v10, *((_DWORD *)a1 + 533));
  }
  else
  {
    DevMsg("No Schedule, ");
  }
  if ( (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 368))(a1) )
  {
    v11 = (*(int (__thiscall **)(float *, int))(*(_DWORD *)a1 + 368))(a1, a2);
    v12 = (float *)v11;
    if ( (*(_DWORD *)(v11 + 252) & 0x800) != 0 )
      sub_100DAE60(v11);
    v17[0] = v12[145];
    v17[1] = v12[146];
    v17[2] = v12[147] + 64.0;
    ((void (__thiscall *)(int (__stdcall ***)(char), float *, int, int))(*off_1061B7A0)[3])(off_1061B7A0, v17, 1, 1);
    v13 = *(const char **)((*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 368))(a1) + 92);
    if ( !v13 )
      v13 = String;
    DevMsg("\nEnemy is %s", v13);
  }
  else
  {
    DevMsg("No enemy ");
  }
  if ( (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)a1 + 296))(a1) )
  {
    DevMsg(" Moving ");
    if ( *(float *)(dword_106B31C8 + 12) >= (double)a1[640] )
    {
      if ( !(unsigned __int8)sub_1007E040(*((_DWORD *)a1 + 647))
        || (v14 = sub_1007DF30(*((_DWORD *)a1 + 647)), v14 <= 0) )
      {
        v14 = 1;
      }
      if ( *((_DWORD *)a1 + 595) == v14 )
        DevMsg(": In stopped anim. ");
    }
    else
    {
      DevMsg(": Stopped for %.2f. ", a1[640] - *(float *)(dword_106B31C8 + 12));
    }
  }
  DevMsg("Leader.");
  DevMsg("\n");
  DevMsg("Yaw speed:%3.1f,Health: %3d\n", *(float *)(*((_DWORD *)a1 + 651) + 24), *((_DWORD *)a1 + 55));
  if ( sub_101C5260(a1) )
  {
    v15 = *(const char **)(sub_101C5260(a1) + 92);
    if ( !v15 )
      v15 = String;
    DevMsg("Groundent:%s\n\n", v15);
  }
  else
  {
    DevMsg("Groundent: NULL\n\n");
  }
}
