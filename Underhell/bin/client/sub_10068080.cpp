char __thiscall sub_10068080(int this, int a2)
{
  int v3; // eax
  char *v4; // edx
  char v5; // cl
  int v6; // eax
  char v7; // cl
  int v8; // eax
  unsigned int v9; // eax
  int i; // ebx
  int v11; // ecx
  char *v12; // ecx
  _DWORD *v13; // edi
  float v15; // [esp+8h] [ebp-23Ch]
  float v16; // [esp+Ch] [ebp-238h]
  char v17[260]; // [esp+1Ch] [ebp-228h] BYREF
  char Str[260]; // [esp+120h] [ebp-124h] BYREF
  _DWORD v19[6]; // [esp+224h] [ebp-20h] BYREF
  _DWORD v20[2]; // [esp+23Ch] [ebp-8h] BYREF

  sub_1003DBB0(this, a2);
  v3 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_104131DC + 36))(dword_104131DC, *(_DWORD *)(this + 1200));
  v4 = &Str[-v3];
  do
  {
    v5 = *(_BYTE *)v3;
    v4[v3] = *(_BYTE *)v3;
    ++v3;
  }
  while ( v5 );
  if ( sub_10065B70((_BYTE *)(this - 8), Str, v17) )
  {
    v6 = 0;
    do
    {
      v7 = v17[v6];
      Str[v6++] = v7;
    }
    while ( v7 );
  }
  if ( !a2 && Str[0] )
  {
    sub_10067390((_DWORD *)(this - 8));
    v8 = sub_10066D90((char *)(this - 8), Str);
    *(_DWORD *)(this + 1236) = v8;
    if ( *(_BYTE *)(this + 1190) )
    {
      if ( v8 )
      {
        v19[0] = 10;
        v19[1] = 2;
        v19[2] = 6;
        v19[3] = 7;
        v19[4] = 5;
        v19[5] = 12;
        sub_101E84C0(v19, 6);
      }
      sub_10067B70(this - 8, *(_DWORD *)(this + 1236));
    }
    else if ( v8 )
    {
      v20[0] = 10;
      v20[1] = 2;
      sub_101E84C0(v20, 2);
    }
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)(this - 8) + 408))(this - 8, -1293.0);
  }
  LOBYTE(v9) = *(_BYTE *)(this + 1232);
  if ( (_BYTE)v9 != *(_BYTE *)(this + 1188) )
  {
    for ( i = 0; i < *(_DWORD *)(this + 1224); ++i )
    {
      v11 = *(_DWORD *)(this + 1212);
      v9 = *(_DWORD *)(v11 + 4 * i);
      if ( v9 != -1 )
      {
        v12 = (char *)off_103DCD74 + 16 * (*(_DWORD *)(v11 + 4 * i) & 0xFFF) + 4;
        v9 >>= 12;
        if ( *((_DWORD *)v12 + 1) == v9 )
        {
          v13 = *(_DWORD **)v12;
          if ( *(_DWORD *)v12 )
          {
            v9 = *(_DWORD *)(this + 1236);
            if ( v9 )
            {
              sub_100672B0((_DWORD *)(this - 8), v9, 0);
              v16 = 0.0;
              v15 = 0.0;
              if ( *(_BYTE *)(this + 1188) )
              {
                sub_101E8600(1, v15, v16);
                LOBYTE(v9) = (unsigned __int8)sub_10040750(v13, *(_DWORD *)(this + 1236));
              }
              else
              {
                sub_101E8600(1, v15, v16);
                LOBYTE(v9) = sub_100404D0(*(_DWORD *)(this + 1236));
              }
            }
          }
        }
      }
    }
  }
  return v9;
}
