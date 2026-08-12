void __thiscall sub_100375F0(int this)
{
  int v2; // ebx
  int v3; // edi
  float v4; // [esp+4h] [ebp-20h]
  float v5; // [esp+8h] [ebp-1Ch]
  float v6; // [esp+Ch] [ebp-18h]
  float v7; // [esp+10h] [ebp-14h]
  float v8; // [esp+14h] [ebp-10h]
  float v9; // [esp+18h] [ebp-Ch]
  int v10; // [esp+1Ch] [ebp-8h]
  char v11; // [esp+23h] [ebp-1h]

  v11 = 0;
  if ( *(_BYTE *)(this + 84) == 23 && *(_BYTE *)(this + 323) )
  {
    v7 = *(float *)(this + 548);
    v11 = 1;
    v8 = *(float *)(this + 552);
    v9 = *(float *)(this + 556);
    v4 = *(float *)(this + 604);
    v5 = *(float *)(this + 608);
    v6 = *(float *)(this + 612);
    sub_10034A30((float *)this, (float *)(this + 708));
    sub_10034B10((float *)this, (float *)(this + 720));
  }
  if ( *(int *)(this + 32) > 0 )
  {
    v2 = 0;
    v10 = *(_DWORD *)(this + 32);
    do
    {
      v3 = *(_DWORD *)(*(_DWORD *)(this + 20) + v2 + 8);
      if ( ((*(int (__thiscall **)(int))(*(_DWORD *)v3 + 28))(v3) & 4) == 0 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 12))(v3);
      v2 += 12;
      --v10;
    }
    while ( v10 );
  }
  if ( v11 )
  {
    if ( *(float *)(this + 548) != v7 || *(float *)(this + 552) != v8 || *(float *)(this + 556) != v9 )
    {
      sub_1000F6C0(this, 1);
      *(float *)(this + 548) = v7;
      *(float *)(this + 552) = v8;
      *(float *)(this + 556) = v9;
    }
    if ( *(float *)(this + 604) != v4 || *(float *)(this + 608) != v5 || *(float *)(this + 612) != v6 )
    {
      sub_1000F6C0(this, 2);
      *(float *)(this + 604) = v4;
      *(float *)(this + 608) = v5;
      *(float *)(this + 612) = v6;
    }
  }
}
