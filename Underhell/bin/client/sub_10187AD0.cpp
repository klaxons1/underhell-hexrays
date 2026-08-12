void __thiscall sub_10187AD0(_DWORD *this)
{
  int v1; // edi
  int v3; // ecx
  int v4; // esi
  bool v5; // c0
  int v6; // esi
  int v7; // edi
  float *v8; // eax
  int (__thiscall *v9)(int); // edx
  float *v10; // eax
  int v11; // [esp+8h] [ebp-8h]
  int v12; // [esp+Ch] [ebp-4h]

  v1 = 0;
  v11 = 0;
  if ( (int)this[1444] > 0 )
  {
    v3 = 0;
    v12 = 0;
    do
    {
      v4 = this[1441];
      v5 = *(float *)(v4 + v3 + 72) > 0.0;
      v6 = v3 + v4;
      if ( v5 && *((float *)off_103DC81C + 3) > (double)*(float *)(v6 + 72) )
      {
        if ( this[1444] - v1 - 1 > 0 )
          memcpy((void *)(this[1441] + v3), (const void *)(this[1441] + v3 + 96), 96 * (this[1444] - v1 - 1));
        --this[1444];
        --v1;
        v12 -= 96;
      }
      else if ( *(int *)(v6 + 4) > 0 )
      {
        v7 = sub_1007A6A0(off_103DCD78, *(_DWORD *)(v6 + 4));
        if ( v7 )
        {
          v8 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 36))(v7);
          *(float *)(v6 + 48) = *v8;
          *(float *)(v6 + 52) = v8[1];
          v9 = *(int (__thiscall **)(int))(*(_DWORD *)v7 + 40);
          *(float *)(v6 + 56) = v8[2];
          v10 = (float *)v9(v7);
          *(float *)(v6 + 60) = *v10;
          *(float *)(v6 + 64) = v10[1];
          *(float *)(v6 + 68) = v10[2];
        }
        v1 = v11;
      }
      ++v1;
      v3 = v12 + 96;
      v11 = v1;
      v12 += 96;
    }
    while ( v1 < this[1444] );
  }
}
