int __thiscall sub_10139FF0(int *this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  unsigned int v5; // eax
  int v6; // ecx
  int v7; // eax
  int (__thiscall *v8)(int *, int *); // eax
  int v9; // eax
  int v11; // [esp-4h] [ebp-18h]
  int v12; // [esp+10h] [ebp-4h] BYREF

  *((_BYTE *)this + 800) = 1;
  v3 = this[207];
  if ( v3 != -1 )
  {
    v4 = &off_1061BE18[4 * (this[207] & 0xFFF) + 1];
    v5 = v3 >> 12;
    if ( v4[1] == v5 )
    {
      if ( *v4 )
      {
        v6 = v4[1] == v5 ? *v4 : 0;
        v11 = *(_DWORD *)(v6 + 24);
        v7 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0);
        sub_1023AF30(v7, v11, 6);
        v8 = *(int (__thiscall **)(int *, int *))(*this + 8);
        *((_BYTE *)this + 920) = 0;
        v12 = *(_DWORD *)v8(this, this + 230);
        v9 = sub_10319100(&v12);
        if ( v9 != -1 )
        {
          if ( dword_106B0004 - v9 - 1 > 0 )
            memcpy(
              (void *)(dword_106AFFF8 + 4 * v9),
              (const void *)(dword_106AFFF8 + 4 * v9 + 4),
              4 * (dword_106B0004 - v9 - 1));
          --dword_106B0004;
        }
      }
    }
  }
  return sub_100EC4A0(this, -1.0, 0);
}
