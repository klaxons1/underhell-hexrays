void __thiscall sub_10409500(_DWORD *this, char a2)
{
  unsigned int v3; // ecx
  int *v4; // eax
  unsigned int v5; // ecx
  void (__thiscall *v6)(_DWORD *, int, _DWORD); // edx
  unsigned int v7; // ecx
  int v8; // eax
  bool v9; // zf
  int v10; // eax
  int savedregs; // [esp+Ch] [ebp+0h] BYREF

  *((_BYTE *)this + 1394) = a2;
  v3 = this[352];
  if ( v3 != -1 )
  {
    v4 = &off_1061BE18[4 * (v3 & 0xFFF) + 1];
    v5 = v3 >> 12;
    if ( v4[1] == v5 )
    {
      if ( *v4 )
        goto LABEL_9;
    }
  }
  if ( !a2 )
  {
    v6 = *(void (__thiscall **)(_DWORD *, int, _DWORD))(*this + 1132);
    *((_BYTE *)this + 1393) = 1;
    v6(this, 12, 0.0);
    sub_104091D0((int)this, (int)&savedregs);
    sub_10408C80(this);
  }
  v7 = this[352];
  if ( v7 != -1 )
  {
    v4 = &off_1061BE18[4 * (this[352] & 0xFFF) + 1];
    v5 = v7 >> 12;
    if ( off_1061BE18[4 * (this[352] & 0xFFF) + 2] == v5 )
    {
      if ( *v4 )
      {
LABEL_9:
        if ( a2 )
        {
          if ( v4[1] == v5 )
            v8 = *v4;
          else
            v8 = 0;
          v9 = *(_BYTE *)(v8 + 896) == 0;
          *(_BYTE *)(v8 + 897) = 0;
          if ( !v9 )
            sub_10242060((int *)v8);
        }
        else
        {
          if ( v4[1] == v5 )
            v10 = *v4;
          else
            v10 = 0;
          v9 = *(_BYTE *)(v10 + 896) == 0;
          *(_BYTE *)(v10 + 897) = 1;
          if ( !v9 )
            sub_10242BA0(v10);
        }
      }
    }
  }
}
