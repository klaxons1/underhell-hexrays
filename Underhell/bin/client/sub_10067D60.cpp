unsigned int __thiscall sub_10067D60(int this, const char *a2, int a3, char a4)
{
  int v5; // eax
  char v6; // cl
  int v7; // eax
  bool v8; // zf
  unsigned int result; // eax
  unsigned int v10; // eax
  int i; // ebx
  int v12; // ecx
  char *v13; // ecx
  _DWORD *v14; // edi
  float v15; // [esp+4h] [ebp-134h]
  float v16; // [esp+8h] [ebp-130h]
  float v17; // [esp+Ch] [ebp-12Ch]
  float v18; // [esp+10h] [ebp-128h]
  char v19[128]; // [esp+18h] [ebp-120h] BYREF
  char Str[128]; // [esp+98h] [ebp-A0h] BYREF
  _DWORD v21[6]; // [esp+118h] [ebp-20h] BYREF
  _DWORD v22[2]; // [esp+130h] [ebp-8h] BYREF

  *(_BYTE *)(this + 1196) = 1;
  *(_BYTE *)(this + 1198) = a4;
  if ( a3 )
    *(_DWORD *)(this + 1216) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 8))(a3);
  else
    *(_DWORD *)(this + 1216) = -1;
  *(_BYTE *)(this + 1212) = 1;
  strcpy(Str, a2);
  if ( sub_10065B70((_BYTE *)this, Str, v19) )
  {
    v5 = 0;
    do
    {
      v6 = v19[v5];
      Str[v5++] = v6;
    }
    while ( v6 );
  }
  if ( Str[0] )
  {
    sub_10067390((_DWORD *)this);
    v7 = sub_10066D90((char *)this, Str);
    v8 = *(_BYTE *)(this + 1198) == 0;
    *(_DWORD *)(this + 1244) = v7;
    if ( v8 )
    {
      if ( v7 )
      {
        v22[0] = 10;
        v22[1] = 2;
        sub_101E84C0(v22, 2);
      }
    }
    else
    {
      if ( v7 )
      {
        v21[0] = 10;
        v21[1] = 2;
        v21[2] = 6;
        v21[3] = 7;
        v21[4] = 5;
        v21[5] = 12;
        sub_101E84C0(v21, 6);
      }
      sub_10067B70(this, *(_DWORD *)(this + 1244));
    }
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 408))(this, -1293.0);
  }
  result = *(_DWORD *)(this + 1216);
  if ( result != -1
    && (result >>= 12, *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 1216) & 0xFFF) + 2) == result)
    && *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 1216) & 0xFFF) + 1) )
  {
    result = *(_DWORD *)(this + 1244);
    if ( result )
    {
      sub_100672B0((_DWORD *)this, result, 0);
      v18 = 0.0;
      v17 = 0.0;
      if ( *(_BYTE *)(this + 1196) )
      {
        sub_101E8600(1, v17, v18);
        v10 = *(_DWORD *)(this + 1216);
        if ( v10 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 1216) & 0xFFF) + 2) != v10 >> 12 )
        {
          sub_10040750(0, *(_DWORD *)(this + 1244));
          return (unsigned int)sub_10066400((_DWORD *)this);
        }
        else
        {
          sub_10040750(
            *((_DWORD **)off_103DCD74 + 4 * (*(_DWORD *)(this + 1216) & 0xFFF) + 1),
            *(_DWORD *)(this + 1244));
          return (unsigned int)sub_10066400((_DWORD *)this);
        }
      }
      else
      {
        sub_101E8600(1, v17, v18);
        sub_100404D0(*(_DWORD *)(this + 1244));
        return (unsigned int)sub_10066400((_DWORD *)this);
      }
    }
  }
  else
  {
    for ( i = 0; i < *(_DWORD *)(this + 1232); ++i )
    {
      v12 = *(_DWORD *)(this + 1220);
      result = *(_DWORD *)(v12 + 4 * i);
      if ( result != -1 )
      {
        v13 = (char *)off_103DCD74 + 16 * (*(_DWORD *)(v12 + 4 * i) & 0xFFF) + 4;
        result >>= 12;
        if ( *((_DWORD *)v13 + 1) == result )
        {
          v14 = *(_DWORD **)v13;
          if ( *(_DWORD *)v13 )
          {
            result = *(_DWORD *)(this + 1244);
            if ( result )
            {
              sub_100672B0((_DWORD *)this, result, 0);
              v16 = 0.0;
              v15 = 0.0;
              if ( *(_BYTE *)(this + 1196) )
              {
                sub_101E8600(1, v15, v16);
                result = (unsigned int)sub_10040750(v14, *(_DWORD *)(this + 1244));
              }
              else
              {
                sub_101E8600(1, v15, v16);
                result = sub_100404D0(*(_DWORD *)(this + 1244));
              }
            }
          }
        }
      }
    }
  }
  return result;
}
