int __thiscall sub_1038FB80(_DWORD *this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  unsigned int v5; // eax
  int v6; // ecx
  int v7; // ebx
  unsigned int v8; // eax
  int *v9; // ecx
  int v10; // edi
  float *v11; // ebx
  float *v12; // edi
  float *v13; // eax
  float *v14; // eax
  int i; // edi
  int v16; // ecx
  float v18[3]; // [esp+14h] [ebp-24h] BYREF
  float v19[3]; // [esp+20h] [ebp-18h] BYREF
  float v20; // [esp+2Ch] [ebp-Ch]
  int v21; // [esp+30h] [ebp-8h]
  int v22; // [esp+34h] [ebp-4h]

  v3 = this[1105];
  if ( v3 != -1 )
  {
    v4 = &off_1061BE18[4 * (this[1105] & 0xFFF) + 1];
    v5 = v3 >> 12;
    if ( v4[1] == v5 )
    {
      if ( *v4 )
      {
        v6 = v4[1] == v5 ? *v4 : 0;
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 264))(v6) )
        {
          sub_1038F830(this);
          this[1105] = -1;
        }
      }
    }
  }
  v7 = a2;
  v8 = *(_DWORD *)(a2 + 44);
  if ( v8 != -1 )
  {
    v9 = &off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1];
    if ( off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] == v8 >> 12 )
    {
      v10 = *v9;
      if ( *v9 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v10 + 320))(*v9) )
        {
          v11 = (float *)dword_106B3CDC;
          if ( sub_102D97E0((float *)dword_106B3CDC, v10) )
          {
            v12 = sub_1001F010(v19, -4.0, 4.0);
            v13 = (float *)(*(int (__thiscall **)(_DWORD *))(*this + 576))(this);
            v20 = *v12 + *v13;
            *(float *)&v21 = v12[1] + v13[1];
            *(float *)&v22 = v12[2] + v13[2];
            v14 = sub_1014AE30(v18, 0.0, 360.0);
            sub_10021920(
              this,
              (int)"item_healthvial",
              SLOBYTE(v20),
              v21,
              v22,
              *(_DWORD *)v14,
              *((_DWORD *)v14 + 1),
              *((_DWORD *)v14 + 2));
            sub_102D9840(v11);
          }
          v7 = a2;
        }
      }
    }
  }
  for ( i = 0; i < this[910]; ++i )
  {
    v16 = *(_DWORD *)(this[907] + 4 * i);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v16 + 80))(v16, v7);
  }
  return sub_10035690((int)this, v7, i, v7);
}
