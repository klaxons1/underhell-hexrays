char __thiscall sub_1029AEF0(_DWORD *this)
{
  int *v2; // eax
  int v3; // ebx
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  int v7; // esi
  _DWORD *v8; // eax
  int v10; // [esp+24h] [ebp-8h] BYREF
  _DWORD *v11; // [esp+28h] [ebp-4h]

  LOBYTE(v2) = (_BYTE)this - 16;
  v3 = 0;
  v11 = this + 252;
  do
  {
    if ( *v11 == -1
      || (v2 = &off_1061BE18[4 * (*v11 & 0xFFF) + 1], v4 = *v11 >> 12, off_1061BE18[4 * (*v11 & 0xFFF) + 2] != v4)
      || !*v2
      || (off_1061BE18[4 * (*v11 & 0xFFF) + 2] != v4 ? (v5 = 0) : (v5 = *v2),
          *(_DWORD *)(v5 + 828)
       || (off_1061BE18[4 * (*v11 & 0xFFF) + 2] != v4 ? (v6 = 0) : (v6 = *v2), LOBYTE(v2) = sub_10070BB0(v6), !(_BYTE)v2)) )
    {
      if ( !*((_BYTE *)this + v3 + 1088) )
      {
        v7 = v3 + 1;
        if ( v3 + 1 < 20 )
        {
          while ( !*((_BYTE *)this + v7 + 1088) )
          {
            v2 = (int *)sub_102976E0(this, v7);
            if ( v2 )
            {
              sub_10295660(v2, &v10);
              if ( *v11 == -1 || off_1061BE18[4 * (*v11 & 0xFFF) + 2] != *v11 >> 12 )
                v8 = 0;
              else
                v8 = (_DWORD *)off_1061BE18[4 * (*v11 & 0xFFF) + 1];
              LOBYTE(v2) = (unsigned __int8)sub_10299F20(v10, (int)this, v8, -1.0, 0, 0, 0, 0, -1);
              break;
            }
            if ( ++v7 >= 20 )
              break;
          }
        }
      }
    }
    ++v11;
    ++v3;
  }
  while ( v3 < 19 );
  return (char)v2;
}
