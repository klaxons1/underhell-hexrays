int __thiscall sub_102978F0(float *this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  unsigned int v5; // eax
  int v6; // ecx
  unsigned int v7; // ecx
  int *v8; // eax
  unsigned int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // eax

  v3 = *((_DWORD *)this + 15);
  if ( v3 != -1 )
  {
    v4 = &off_1061BE18[4 * ((_DWORD)this[15] & 0xFFF) + 1];
    v5 = v3 >> 12;
    if ( v4[1] == v5 )
    {
      if ( *v4 )
      {
        v6 = v4[1] == v5 ? *v4 : 0;
        if ( *(_DWORD *)(v6 + 860) == 1 )
        {
          v7 = *(_DWORD *)(a2 + 44);
          if ( v7 != -1 )
          {
            v8 = &off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1];
            v9 = v7 >> 12;
            if ( off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] == v9 )
            {
              if ( *v8 )
              {
                if ( off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] == v9 )
                  v10 = *v8;
                else
                  v10 = 0;
                if ( sub_10296C50(this, v10) )
                {
                  v11 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 52))(this);
                  v12 = sub_1007DB30((_DWORD *)(v11 + 52), 100001);
                  sub_10023CB0(*((char **)this + 1), v12);
                  this[22] = *(float *)(dword_106B31C8 + 12) + 4.0;
                }
              }
            }
          }
        }
      }
    }
  }
  return sub_1004B690((_DWORD **)this);
}
