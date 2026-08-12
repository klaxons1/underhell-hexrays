void __thiscall sub_10125970(int *this)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  char *v8; // edx
  int v9; // eax
  int v10; // edi
  int v11; // eax
  int v12; // [esp-8h] [ebp-Ch]

  if ( this[201] )
  {
    v2 = this[75];
    if ( v2 != -1 )
    {
      v3 = &off_1061BE18[4 * (this[75] & 0xFFF) + 1];
      v4 = v2 >> 12;
      if ( off_1061BE18[4 * (this[75] & 0xFFF) + 2] == v4 )
      {
        if ( *v3 )
        {
          v5 = off_1061BE18[4 * (this[75] & 0xFFF) + 2] == v4 ? *v3 : 0;
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 208))(v5) )
          {
            v6 = sub_10019AD0(this);
            v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 208))(v6);
            v8 = (char *)this[201];
            if ( !v8 )
              v8 = (char *)String;
            v9 = sub_100BEF30(v7, v8);
            if ( v9 )
            {
              v10 = *this;
              v12 = v9;
              v11 = sub_10019AD0(this);
              (*(void (__thiscall **)(int *, int, int))(v10 + 140))(this, v11, v12);
              sub_100E10C0((int)this, &flt_106F1CA8);
              sub_100E11A0((int)this, &flt_106F1CB4);
            }
          }
        }
      }
    }
  }
}
