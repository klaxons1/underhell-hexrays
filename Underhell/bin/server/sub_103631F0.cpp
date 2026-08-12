void __thiscall sub_103631F0(_DWORD *this)
{
  int v1; // esi
  int v2; // ebx
  _DWORD *v3; // edi
  int v4; // eax
  _DWORD *v5; // eax
  int v6; // edi
  int v7; // ebx
  int *v8; // ecx
  _DWORD *v9; // esi
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  char *String1[4]; // [esp+14h] [ebp-1Ch]
  int v14; // [esp+24h] [ebp-Ch]
  int v15; // [esp+28h] [ebp-8h]
  _DWORD *v16; // [esp+2Ch] [ebp-4h]

  v1 = (int)this;
  v2 = 0;
  v3 = this + 1084;
  v15 = (int)this;
  v14 = 0;
  v16 = this + 1084;
  do
  {
    if ( *v3 == -1 || off_1061BE18[4 * (*v3 & 0xFFF) + 2] != *v3 >> 12 || !off_1061BE18[4 * (*v3 & 0xFFF) + 1] )
    {
      v4 = *(_DWORD *)(v1 + 252) >> 11;
      String1[0] = "physgun";
      String1[1] = "thumb";
      String1[2] = "pinky";
      String1[3] = "index";
      if ( (v4 & 1) != 0 )
        sub_100DAE60(v1);
      v5 = sub_10243040("sprites/glow04_noz.vmt", (float *)(v1 + 580), 0);
      if ( v5 )
        *v3 = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v5 + 8))(v5);
      else
        *v3 = -1;
      if ( *v3 == -1 || off_1061BE18[4 * (*v3 & 0xFFF) + 2] != *v3 >> 12 )
        v6 = 0;
      else
        v6 = off_1061BE18[4 * (*v3 & 0xFFF) + 1];
      v7 = sub_100BEF30(v1, String1[v2]);
      sub_100C0E40((unsigned int *)(v6 + 800), v1);
      if ( *(_DWORD *)(v6 + 804) != v7 )
      {
        if ( *(_BYTE *)(v6 + 84) )
        {
          *(_BYTE *)(v6 + 88) |= 1u;
        }
        else
        {
          v8 = *(int **)(v6 + 24);
          if ( v8 )
            sub_100194B0(v8, 804);
        }
        *(_DWORD *)(v6 + 804) = v7;
      }
      sub_100EACE0((unsigned __int16 *)v6, v15, 1);
      v9 = v16;
      if ( *v16 == -1 || off_1061BE18[4 * (*v16 & 0xFFF) + 2] != *v16 >> 12 )
        v10 = 0;
      else
        v10 = off_1061BE18[4 * (*v16 & 0xFFF) + 1];
      sub_10128950(v10, 3, 255, 128, 0, 64, 14);
      if ( *v9 == -1 || off_1061BE18[4 * (*v9 & 0xFFF) + 2] != *v9 >> 12 )
        v11 = 0;
      else
        v11 = off_1061BE18[4 * (*v9 & 0xFFF) + 1];
      sub_10242820(v11, 255, 0.2);
      if ( *v9 == -1 || off_1061BE18[4 * (*v9 & 0xFFF) + 2] != *v9 >> 12 )
        v12 = 0;
      else
        v12 = off_1061BE18[4 * (*v9 & 0xFFF) + 1];
      sub_102428B0(v12, 0.55000001, 0.2);
      v2 = v14;
      v1 = v15;
      v3 = v16;
    }
    ++v2;
    ++v3;
    v14 = v2;
    v16 = v3;
  }
  while ( v2 < 4 );
}
