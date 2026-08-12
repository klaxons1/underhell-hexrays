int __thiscall sub_101CBB70(int *this, _BYTE *a2, int a3)
{
  int result; // eax
  int v4; // edi
  float *v5; // esi
  char Source[256]; // [esp+24h] [ebp-104h] BYREF
  int *v7; // [esp+124h] [ebp-4h]

  result = (int)a2;
  v4 = 0;
  *a2 = 0;
  v7 = this;
  if ( this[283] > 0 )
  {
    v5 = (float *)(this + 1183);
    do
    {
      if ( v4 )
        sub_10429750((int)a2, ",", a3, -1);
      sub_1001E280(Source, "%d,%.2f %.2f %.2f", v4, *(v5 - 1), *v5, v5[1]);
      result = sub_10429750((int)a2, Source, a3, -1);
      ++v4;
      v5 += 3;
    }
    while ( v4 < v7[283] );
  }
  return result;
}
