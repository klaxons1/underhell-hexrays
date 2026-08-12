void __thiscall sub_102DD130(_DWORD *this, int a2)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  int v5; // eax
  int v6; // edi
  _DWORD *v7; // ebx
  int *v8; // ecx
  _DWORD *v9; // esi
  _DWORD *v10; // eax
  _DWORD *v11; // ecx
  __int64 v12; // [esp-8h] [ebp-1Ch]

  v2 = this[248];
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (v2 & 0xFFF) + 1];
    v4 = v2 >> 12;
    if ( v3[1] == v4 )
    {
      if ( *v3 )
      {
        if ( v3[1] == v4 )
          v5 = *v3;
        else
          v5 = 0;
        v6 = 0;
        v7 = (_DWORD *)(__RTDynamicCast(
                          v5,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                          (int)&CHL2_Player `RTTI Type Descriptor',
                          0)
                      + 1908);
        while ( 1 )
        {
          if ( *v7 != -1 )
          {
            v8 = &off_1061BE18[4 * (*v7 & 0xFFF) + 1];
            if ( off_1061BE18[4 * (*v7 & 0xFFF) + 2] == *v7 >> 12 )
            {
              v9 = (_DWORD *)*v8;
              if ( *v8 )
              {
                if ( (*(unsigned __int8 (__thiscall **)(int))(*v9 + 968))(*v8) && (sub_100D1400(v9) || sub_100D1410(v9)) )
                  break;
              }
            }
          }
          ++v6;
          ++v7;
          if ( v6 >= 48 )
          {
            v10 = this;
            v11 = this + 218;
            goto LABEL_16;
          }
        }
        v10 = this;
        v11 = this + 212;
LABEL_16:
        HIDWORD(v12) = v10;
        LODWORD(v12) = v10;
        sub_1010DD80(v11, v12, 0.0);
      }
    }
  }
}
