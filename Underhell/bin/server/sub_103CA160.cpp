char __thiscall sub_103CA160(int this, __int64 a2, int a3, int a4)
{
  int *v5; // edi
  char result; // al
  bool v7; // zf
  int (__thiscall *v8)(int, const char *); // eax
  void *v9; // eax
  bool v10; // al
  int (__thiscall *v11)(int, const char *, _DWORD); // eax
  int v12; // eax
  int savedregs; // [esp+Ch] [ebp+0h]
  int savedregsa; // [esp+Ch] [ebp+0h]

  sub_1010DD80((_DWORD *)(this + 5812), a2, 0.0);
  if ( !sub_103C7470(this) )
    goto LABEL_7;
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v5 = (int *)sub_1001FB30((float *)(this + 580), 480.0);
  if ( sub_103C94D0((_DWORD *)this, v5) && v5 )
  {
    sub_10023CB0((char *)this, 25);
    return sub_103C86C0(this, (int)v5, 1);
  }
  else
  {
LABEL_7:
    result = sub_10093C60((void *)this);
    if ( result && !*(_DWORD *)(this + 5732) )
    {
      v7 = (*(unsigned __int8 (__thiscall **)(int, const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 2244))(
             this,
             "TLK_USE",
             0,
             0,
             0,
             0) == 0;
      v8 = *(int (__thiscall **)(int, const char *))(*(_DWORD *)this + 1656);
      if ( v7 )
      {
        v9 = (void *)v8(this, "TLK_HELLO");
        v10 = sub_100AFBB0(v9, savedregs);
        savedregsa = 0;
        v7 = !v10;
        v11 = *(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)this + 2244);
        if ( v7 )
          return v11(this, "TLK_HELLO", 0);
        else
          return v11(this, "TLK_IDLE", 0);
      }
      else
      {
        v12 = ((int (__thiscall *)(int))v8)(this);
        return sub_100B0060(v12, "TLK_HELLO", 0, 1);
      }
    }
  }
  return result;
}
