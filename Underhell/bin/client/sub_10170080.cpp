float *__thiscall sub_10170080(int this, float *a2, int a3)
{
  float *v5; // esi
  int v6; // eax
  int v7; // eax
  unsigned __int16 v8; // ax
  int v9; // ebx
  float **v10; // eax
  int v11; // ecx
  int v12; // eax

  if ( !a3 )
  {
    DevWarning(1, "temporary ent model invalid\n");
    return 0;
  }
  if ( *(_WORD *)(this + 70) >= 0x1F4u )
  {
    v5 = 0;
    goto LABEL_7;
  }
  v6 = sub_1022FF70(this + 4);
  v5 = (float *)v6;
  if ( v6 )
  {
    sub_1016BB40(v6);
LABEL_7:
    if ( v5 )
      goto LABEL_14;
  }
  sub_1016FD50(this);
  if ( *(_WORD *)(this + 70) < 0x1F4u )
  {
    v7 = sub_1022FF70(this + 4);
    v5 = (float *)v7;
    if ( !v7 )
    {
LABEL_13:
      DevWarning(1, "Couldn't alloc a high priority TENT (max %i)!\n", 500);
      return 0;
    }
    sub_1016BB40(v7);
  }
  else
  {
    v5 = 0;
  }
  if ( !v5 )
    goto LABEL_13;
LABEL_14:
  v8 = sub_100EC160((int *)(this + 52), 0);
  v9 = v8;
  sub_1016F8E0(this + 52, 0xFFFFu, v8);
  v10 = (float **)(*(_DWORD *)(this + 52) + 8 * v9);
  if ( v10 )
    *v10 = v5;
  (*(void (__thiscall **)(float *, int, _DWORD))(*(_DWORD *)v5 + 744))(v5, a3, *((float *)off_103DC81C + 3));
  *((_DWORD *)v5 + 503) = 1;
  sub_10034A30(v5, a2);
  *((_DWORD *)v5 + 519) = 13;
  sub_10036100((int)v5, 13);
  v12 = CommandLine_Tier0(v11);
  if ( (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)v12 + 12))(v12, "-tools", 0) )
    sub_1009C060(off_103DCD78, &a3, (int)v5);
  return v5;
}
