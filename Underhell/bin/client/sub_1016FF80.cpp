_DWORD *__thiscall sub_1016FF80(int this, float *a2, int a3)
{
  int v5; // eax
  _DWORD *v6; // esi
  unsigned __int16 v7; // ax
  int v8; // ebx
  _DWORD *v9; // eax
  int v10; // ecx
  int v11; // eax

  if ( a3 )
  {
    if ( *(_WORD *)(this + 70) < 0x1F4u && (v5 = sub_1022FF70(this + 4), (v6 = (_DWORD *)v5) != 0) )
    {
      sub_1016BB40(v5);
      v7 = sub_100EC160((int *)(this + 52), 0);
      v8 = v7;
      sub_1016F8E0(this + 52, 0xFFFFu, v7);
      v9 = (_DWORD *)(*(_DWORD *)(this + 52) + 8 * v8);
      if ( v9 )
        *v9 = v6;
      (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v6 + 744))(v6, a3, *((float *)off_103DC81C + 3));
      v6[503] = 0;
      sub_10037BA0((int)v6, a2);
      v6[519] = 13;
      sub_10036100((int)v6, 13);
      v11 = CommandLine_Tier0(v10);
      (*(void (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)v11 + 12))(v11, "-tools", 0);
      return v6;
    }
    else
    {
      DevWarning(1, "Overflow %d temporary ents!\n", 500);
      return 0;
    }
  }
  else
  {
    DevWarning(1, "Can't create temporary entity with NULL model!\n");
    return 0;
  }
}
