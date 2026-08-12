void __thiscall sub_100370C0(float *this, _DWORD *a2)
{
  float v3; // eax
  float v4; // ecx
  float v5; // edx
  int v6; // ebx
  float v7; // ecx
  float v8; // edx
  int v9; // esi
  float v10[3]; // [esp+8h] [ebp-18h] BYREF
  float v11[3]; // [esp+14h] [ebp-Ch] BYREF

  v3 = this[137];
  v4 = this[138];
  v5 = this[139];
  v10[0] = v3;
  v11[0] = this[151];
  v6 = a2[3];
  v10[1] = v4;
  v7 = this[152];
  v10[2] = v5;
  v8 = this[153];
  v11[1] = v7;
  v11[2] = v8;
  if ( v6 > 0 )
  {
    v9 = 0;
    do
    {
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*a2 + v9 + 8) + 32))(*(_DWORD *)(*a2 + v9 + 8));
      v9 += 12;
      --v6;
    }
    while ( v6 );
  }
  sub_10034660(this, v10, v11, 0);
}
