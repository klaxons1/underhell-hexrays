void *__thiscall sub_10051920(int this, int a2)
{
  int v2; // edi
  int (__thiscall ***v4)(_DWORD); // eax
  int v5; // eax
  _DWORD *v6; // ecx
  int v7; // edi
  int v8; // eax
  _BYTE *v9; // edx
  int v10; // ebx
  int v11; // eax
  char v12; // cl
  int v13; // ecx
  int v14; // edx
  int v15; // edi
  int v16; // eax
  int v17; // ebx
  int i; // edi
  int v20; // [esp+10h] [ebp-10h]
  _BYTE *v21; // [esp+14h] [ebp-Ch]
  int v22; // [esp+18h] [ebp-8h]
  int v23; // [esp+1Ch] [ebp-4h]

  v2 = a2;
  sub_1003CD40((_DWORD *)this, a2);
  if ( !v2 )
  {
    sub_1004EF40((_DWORD *)(this - 8));
    sub_102334D0("models/brokenglass/glassbroken_solid", "Model textures", 1);
    v4 = (int (__thiscall ***)(_DWORD))(*(int (__thiscall **)(_DWORD, const char *, char *, _DWORD))(**(_DWORD **)(this + 2036) + 44))(
                                         *(_DWORD *)(this + 2036),
                                         "$basetexture",
                                         (char *)&a2 + 3,
                                         0);
    if ( HIBYTE(a2) )
      v5 = (**v4)(v4);
    else
      v5 = 0;
    sub_10233410(v5);
    v6 = (_DWORD *)(this - 8);
    if ( *(_DWORD *)(this + 1232) == 1 )
    {
      sub_1004F410(v6, 0, 0, (int)"models/brokentile/tilebroken_03a");
      sub_1004F410((_DWORD *)(this - 8), 1, 0, (int)"models/brokentile/tilebroken_03b");
      sub_1004F410((_DWORD *)(this - 8), 2, 0, (int)"models/brokentile/tilebroken_03c");
      sub_1004F410((_DWORD *)(this - 8), 3, 0, (int)"models/brokentile/tilebroken_03d");
      sub_1004F410((_DWORD *)(this - 8), 0, 1, (int)"models/brokentile/tilebroken_02a");
      sub_1004F410((_DWORD *)(this - 8), 1, 1, (int)"models/brokentile/tilebroken_02b");
      sub_1004F410((_DWORD *)(this - 8), 2, 1, (int)"models/brokentile/tilebroken_02c");
      sub_1004F410((_DWORD *)(this - 8), 3, 1, (int)"models/brokentile/tilebroken_02d");
      sub_1004F410((_DWORD *)(this - 8), 0, 2, (int)"models/brokentile/tilebroken_01a");
      sub_1004F410((_DWORD *)(this - 8), 1, 2, (int)"models/brokentile/tilebroken_01b");
      sub_1004F410((_DWORD *)(this - 8), 2, 2, (int)"models/brokentile/tilebroken_01c");
      sub_1004F410((_DWORD *)(this - 8), 3, 2, (int)"models/brokentile/tilebroken_01d");
    }
    else
    {
      sub_1004F410(v6, 0, 0, (int)"models/brokenglass/glassbroken_03a");
      sub_1004F410((_DWORD *)(this - 8), 1, 0, (int)"models/brokenglass/glassbroken_03b");
      sub_1004F410((_DWORD *)(this - 8), 2, 0, (int)"models/brokenglass/glassbroken_03c");
      sub_1004F410((_DWORD *)(this - 8), 3, 0, (int)"models/brokenglass/glassbroken_03d");
      sub_1004F410((_DWORD *)(this - 8), 0, 1, (int)"models/brokenglass/glassbroken_02a");
      sub_1004F410((_DWORD *)(this - 8), 1, 1, (int)"models/brokenglass/glassbroken_02b");
      sub_1004F410((_DWORD *)(this - 8), 2, 1, (int)"models/brokenglass/glassbroken_02c");
      sub_1004F410((_DWORD *)(this - 8), 3, 1, (int)"models/brokenglass/glassbroken_02d");
      sub_1004F410((_DWORD *)(this - 8), 0, 2, (int)"models/brokenglass/glassbroken_01a");
      sub_1004F410((_DWORD *)(this - 8), 1, 2, (int)"models/brokenglass/glassbroken_01b");
      sub_1004F410((_DWORD *)(this - 8), 2, 2, (int)"models/brokenglass/glassbroken_01c");
      sub_1004F410((_DWORD *)(this - 8), 3, 2, (int)"models/brokenglass/glassbroken_01d");
    }
  }
  v7 = 0;
  HIBYTE(a2) = 0;
  v20 = 0;
  if ( *(int *)(this + 1192) > 0 )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(this + 1188);
      if ( v8 > 0 )
        break;
LABEL_68:
      v20 = ++v7;
      if ( v7 >= *(_DWORD *)(this + 1192) )
      {
        if ( HIBYTE(a2) )
        {
          v17 = 0;
          if ( *(int *)(this + 1188) > 0 )
          {
            a2 = this + 1780;
            do
            {
              for ( i = 0; i < *(_DWORD *)(this + 1192); ++i )
              {
                if ( (*(_BYTE *)(a2 + i) & 2) != 0 )
                  sub_100514A0(this - 8, v17, i, -1);
              }
              a2 += 16;
              ++v17;
            }
            while ( v17 < *(_DWORD *)(this + 1188) );
          }
        }
        return memcpy_0((void *)(this + 1524), (const void *)(this + 1268), 0x100u);
      }
    }
    v9 = (_BYTE *)(this + v7 + 1780);
    v22 = -1;
    v23 = -16;
    v21 = v9;
    while ( 1 )
    {
      v10 = v22 + 1;
      v11 = v22 + 1 + v7 * v8;
      v12 = *(_BYTE *)(this + v11 + 1268);
      if ( v12 != *(_BYTE *)(this + v11 + 1524) )
        HIBYTE(a2) = 1;
      if ( v10 < *(_DWORD *)(this + 1188) && v7 < *(_DWORD *)(this + 1192) && v10 >= 0 && v7 >= 0 )
      {
        if ( !v12 )
        {
          *v9 &= ~1u;
LABEL_20:
          if ( HIBYTE(a2) )
          {
            if ( v10 < *(_DWORD *)(this + 1188) && v7 < *(_DWORD *)(this + 1192) && v10 >= 0 && v7 >= 0 )
              *v9 |= 2u;
            v13 = v7 + 1;
            if ( v10 < *(_DWORD *)(this + 1188) && v13 < *(_DWORD *)(this + 1192) && v10 >= 0 && v13 >= 0 )
              *(_BYTE *)(v13 + this - 8 + v23 + 1804) |= 2u;
            v14 = v7 - 1;
            if ( v10 < *(_DWORD *)(this + 1188) && v14 < *(_DWORD *)(this + 1192) && v10 >= 0 && v14 >= 0 )
              *(_BYTE *)(this + v23 - 8 + v14 + 1804) |= 2u;
            if ( v22 < *(_DWORD *)(this + 1188) && v7 < *(_DWORD *)(this + 1192) && v22 >= 0 && v7 >= 0 )
              *(v21 - 16) |= 2u;
            v15 = v22 + 2;
            if ( v22 + 2 < *(_DWORD *)(this + 1188) )
            {
              if ( v20 < *(_DWORD *)(this + 1192) && v15 >= 0 && v20 >= 0 )
                v21[16] |= 2u;
              if ( v15 < *(_DWORD *)(this + 1188) && v13 < *(_DWORD *)(this + 1192) && v15 >= 0 && v13 >= 0 )
              {
                *(_BYTE *)(v13 + this - 8 + v23 + 1820) |= 2u;
                v10 = v22 + 1;
              }
            }
            v16 = v22;
            if ( v22 < *(_DWORD *)(this + 1188) && v13 < *(_DWORD *)(this + 1192) && v22 >= 0 && v13 >= 0 )
            {
              *(_BYTE *)(v13 + this - 8 + v23 + 1788) |= 2u;
              v16 = v22;
            }
            if ( v15 < *(_DWORD *)(this + 1188) && v14 < *(_DWORD *)(this + 1192) && v15 >= 0 && v14 >= 0 )
            {
              *(_BYTE *)(this + v23 - 8 + v14 + 1820) |= 2u;
              v16 = v22;
            }
            if ( v16 < *(_DWORD *)(this + 1188) && v14 < *(_DWORD *)(this + 1192) && v16 >= 0 && v14 >= 0 )
              *(_BYTE *)(this + v23 - 8 + v14 + 1788) |= 2u;
            v9 = v21;
            v7 = v20;
          }
          goto LABEL_67;
        }
        *v9 |= 1u;
      }
      if ( !v12 )
        goto LABEL_20;
LABEL_67:
      v8 = *(_DWORD *)(this + 1188);
      v23 += 16;
      v22 = v10;
      v9 += 16;
      v21 = v9;
      if ( v10 + 1 >= v8 )
        goto LABEL_68;
    }
  }
  return memcpy_0((void *)(this + 1524), (const void *)(this + 1268), 0x100u);
}
