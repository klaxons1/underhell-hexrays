int __thiscall sub_10297770(float *this, int a2, int a3)
{
  unsigned int v4; // eax
  int *v5; // ecx
  unsigned int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // eax

  v4 = *((_DWORD *)this + 15);
  if ( v4 != -1 )
  {
    v5 = &off_1061BE18[4 * ((_DWORD)this[15] & 0xFFF) + 1];
    v6 = v4 >> 12;
    if ( v5[1] == v6 )
    {
      if ( *v5 )
      {
        if ( v5[1] == v6 )
          v7 = *v5;
        else
          v7 = 0;
        if ( *(_DWORD *)(v7 + 860) == 1
          && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2)
          && sub_10296C50(this, a3) )
        {
          v8 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 52))(this);
          v9 = sub_1007DB30((_DWORD *)(v8 + 52), 100001);
          sub_10023CB0(*((char **)this + 1), v9);
          this[22] = *(float *)(dword_106B31C8 + 12) + 4.0;
        }
      }
    }
  }
  return sub_1004B600((_DWORD **)this);
}
