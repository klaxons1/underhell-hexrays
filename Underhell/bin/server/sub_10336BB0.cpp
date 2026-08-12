void __thiscall sub_10336BB0(_DWORD *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  unsigned int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // ebx
  int v8; // edi
  unsigned int v9; // eax
  int v10; // ecx
  float v11[3]; // [esp+4h] [ebp-Ch] BYREF

  v2 = this[103];
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (this[103] & 0xFFF) + 1];
    v4 = v2 >> 12;
    if ( v3[1] == v4 )
    {
      if ( *v3 )
      {
        v5 = v3[1] == v4 ? *v3 : 0;
        v6 = sub_100D7680(v5);
        if ( v6 )
        {
          v7 = sub_100BEF30(v6, "eyes");
          if ( v7 )
          {
            if ( this[103] == -1 || off_1061BE18[4 * (this[103] & 0xFFF) + 2] != this[103] >> 12 )
              v8 = 0;
            else
              v8 = off_1061BE18[4 * (this[103] & 0xFFF) + 1];
            if ( (*(_DWORD *)(v8 + 252) & 0x800) != 0 )
              sub_100DAE60(v8);
            sub_100E0EA0((int)this, (float *)(v8 + 704));
            v9 = this[103];
            if ( v9 == -1 || off_1061BE18[4 * (this[103] & 0xFFF) + 2] != v9 >> 12 )
              v10 = 0;
            else
              v10 = off_1061BE18[4 * (this[103] & 0xFFF) + 1];
            (*(void (__thiscall **)(_DWORD *, int, int))(*this + 140))(this, v10, v7);
            v11[0] = -2.5;
            v11[1] = 0.0;
            v11[2] = 3.9000001;
            sub_100E10C0((int)this, v11);
          }
        }
      }
    }
  }
  (*(void (__thiscall **)(_DWORD *, const char *))(*this + 104))(this, "models/chefhat.mdl");
  sub_10112C00((int)(this + 80), 0);
}
