void __thiscall sub_1017F520(unsigned int *this, int a2)
{
  int v3; // edi
  char *v4; // eax
  char *v5; // esi
  unsigned int v6; // eax
  unsigned int *v7; // edi
  int v8; // eax
  _DWORD *v9; // eax
  int v10; // esi
  int v11; // ebx
  float *v12; // eax
  int v13; // [esp+0h] [ebp-10h]

  if ( a2 )
  {
    v3 = sub_1022B4C0("animation", (int)Locale);
    v4 = (char *)sub_1022B4C0("activity", (int)Locale);
    v5 = v4;
    if ( v4 && *v4 )
    {
      v6 = this[71];
      v7 = this + 71;
      if ( v6 != -1
        && *((_DWORD *)off_103DCD74 + 4 * (this[71] & 0xFFF) + 2) == v6 >> 12
        && *((_DWORD *)off_103DCD74 + 4 * (this[71] & 0xFFF) + 1) )
      {
        v8 = sub_1017F3A0(this, v5);
        if ( v8 != -1 )
          v5 = *(char **)(*(_DWORD *)(*(_DWORD *)(this[70] + 64) + 4 * v8) + 8);
        v13 = sub_10002040((int)v5);
        v9 = (_DWORD *)sub_1006BE10(this + 71);
        v10 = sub_10029CF0(v9, v13);
        if ( v10 != -1 )
        {
          v11 = sub_1006BE10(this + 71);
          sub_10029860(v11, v10);
          sub_10029AE0(v11);
          v12 = (float *)sub_1006BE10(v7);
          sub_10025680(v12, 0.0);
        }
      }
    }
    else
    {
      (*(void (__thiscall **)(unsigned int *, int))(*this + 880))(this, v3);
    }
  }
}
