void __thiscall sub_1012D710(_DWORD *this, _DWORD *a2)
{
  int v3; // esi
  int v4; // eax
  int v5; // esi
  int v6; // ecx
  unsigned __int16 v7; // ax
  int v8; // esi
  int v9; // esi

  if ( (a2[63] & 1) == 0 )
  {
    v3 = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*a2 + 8))(a2);
    if ( v3 != -1 )
    {
      v4 = a2[63];
      v5 = v3 & 0xFFF;
      if ( (v4 & 0x400000) != 0 && (v4 & 0x800000) != 0 )
      {
        sub_1012CDF0(this, v5);
      }
      else
      {
        v6 = *((unsigned __int16 *)this + v5 + 2);
        if ( (_WORD)v6 == 0xFFFF )
        {
          v7 = sub_1012D620(this + 2049);
          *((_WORD *)this + v5 + 2) = v7;
          *(_WORD *)(this[2049] + 8 * v7) = v5;
          *(_DWORD *)(this[2049] + 8 * *((unsigned __int16 *)this + v5 + 2) + 4) = 0;
          if ( (a2[63] & 0x800000) != 0 )
          {
            v8 = this[2049] + 8 * *((unsigned __int16 *)this + v5 + 2);
            *(_DWORD *)(v8 + 4) = sub_100E9340(a2);
          }
        }
        else if ( (v4 & 0x800000) != 0 )
        {
          v9 = this[2049] + 8 * v6;
          *(_DWORD *)(v9 + 4) = sub_100E9340(a2);
        }
        else
        {
          *(_DWORD *)(this[2049] + 8 * v6 + 4) = 0;
        }
      }
    }
  }
}
