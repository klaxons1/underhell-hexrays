int __thiscall sub_100F0490(int this, float a2)
{
  double v2; // st7
  int v4; // eax
  int v5; // edi
  int v6; // esi
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  double v10; // st7
  double v11; // st6
  int result; // eax
  int v13; // edx
  int v14; // eax
  int v15; // esi
  int v16; // eax
  int v17; // esi
  int v18; // eax
  int v19; // eax
  int v20; // eax
  void (__thiscall *v21)(int); // edx
  float v22; // [esp+4h] [ebp-14h]
  float v23; // [esp+4h] [ebp-14h]
  float v24; // [esp+14h] [ebp-4h]
  int v25; // [esp+20h] [ebp+8h]

  v2 = 0.1;
  *(_BYTE *)(this + 38) = 1;
  if ( a2 <= 0.1 )
    v2 = a2;
  else
    a2 = 0.1;
  v4 = *(unsigned __int16 *)(this + 52);
  if ( v4 != 0xFFFF )
  {
    do
    {
      v5 = 8 * (unsigned __int16)v4;
      v6 = *(_DWORD *)(v5 + *(_DWORD *)(this + 40));
      v7 = *(_DWORD *)(v6 + 148);
      if ( (v7 & 1) == 0 )
      {
        if ( (v7 & 4) != 0 && ((v7 & 8) == 0 || sub_100ED670(*(_DWORD *)(v5 + *(_DWORD *)(this + 40)))) )
          *(_DWORD *)(v6 + 148) &= ~4u;
        v8 = *(_DWORD *)(v6 + 140);
        *(_DWORD *)(v6 + 148) &= ~0x20u;
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v8 + 4))(LODWORD(a2));
        v9 = *(_DWORD *)(v6 + 148);
        if ( (v9 & 0x800) != 0 )
          *(_DWORD *)(v6 + 148) = v9 & 0xFFFFF7FF;
        else
          sub_100ED080(v6, a2);
        sub_100EB730(v6);
      }
      v4 = *(unsigned __int16 *)(*(_DWORD *)(this + 40) + v5 + 6);
    }
    while ( v4 != 0xFFFF );
    v2 = a2;
  }
  if ( byte_1043585D )
  {
    v24 = 0.0;
    if ( v2 >= 0.0 )
    {
      v10 = 0.0099999998;
      do
      {
        v22 = v10;
        sub_100F0250((_DWORD *)this, v22);
        v11 = v24 + 0.0099999998;
        v10 = 0.0099999998;
        v24 = v11;
      }
      while ( v11 <= a2 );
    }
  }
  else
  {
    v23 = v2;
    sub_100F0250((_DWORD *)this, v23);
  }
  result = *(unsigned __int16 *)(this + 52);
  *(_BYTE *)(this + 38) = 0;
  if ( result != 0xFFFF )
  {
    do
    {
      v13 = (unsigned __int16)result;
      v14 = *(_DWORD *)(this + 40);
      v15 = *(unsigned __int16 *)(v14 + 8 * v13 + 6);
      v16 = *(_DWORD *)(v14 + 8 * v13);
      if ( (*(_BYTE *)(v16 + 148) & 1) != 0 )
        sub_100EF970((_DWORD *)this, v16);
      result = v15;
    }
    while ( v15 != 0xFFFF );
  }
  v17 = *(_DWORD *)(this + 68);
  if ( v17 )
  {
    do
    {
      result = *(_DWORD *)(v17 + 6708);
      v25 = result;
      if ( (*(_BYTE *)(v17 + 6720) & 2) != 0 )
      {
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)off_103DCDDC + 4))(*(unsigned __int16 *)(v17 + 12));
        v18 = *(_DWORD *)(v17 + 6712);
        if ( v18 )
        {
          *(_DWORD *)(v18 + 6708) = *(_DWORD *)(v17 + 6708);
          v19 = *(_DWORD *)(v17 + 6708);
          if ( v19 )
            *(_DWORD *)(v19 + 6712) = *(_DWORD *)(v17 + 6712);
        }
        else if ( *(_DWORD *)(this + 68) == v17 )
        {
          v20 = *(_DWORD *)(v17 + 6708);
          *(_DWORD *)(this + 68) = v20;
          if ( v20 )
            *(_DWORD *)(v20 + 6712) = 0;
        }
        v21 = *(void (__thiscall **)(int))(*(_DWORD *)v17 + 28);
        *(_DWORD *)(v17 + 6712) = 0;
        *(_DWORD *)(v17 + 6708) = 0;
        v21(v17);
        result = v25;
      }
      v17 = result;
    }
    while ( result );
  }
  return result;
}
