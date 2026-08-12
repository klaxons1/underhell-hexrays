void __thiscall sub_1032B480(int **this)
{
  int v2; // eax
  float *v3; // ecx
  float *v4; // ecx
  float *v5; // ecx
  float *v6; // ecx
  float *v7; // ecx
  float *v8; // ecx
  int v9; // [esp+10h] [ebp-4h] BYREF

  if ( !this[962] )
  {
    v2 = sub_10283150();
    this[962] = (int *)v2;
    if ( v2 )
    {
      v9 = 10;
      sub_100C1E10((float *)(v2 + 828), &v9);
      v3 = (float *)(this[962] + 208);
      v9 = 1;
      sub_100C1E70(v3, &v9);
      v4 = (float *)(this[962] + 212);
      v9 = 8;
      sub_10284420(v4, &v9);
      v5 = (float *)(this[962] + 213);
      v9 = 50;
      sub_10284480(v5, &v9);
      v6 = (float *)(this[962] + 214);
      v9 = 10;
      sub_102842B0(v6, &v9);
      v7 = (float *)(this[962] + 210);
      v9 = 15;
      sub_102843C0(v7, &v9);
      v8 = (float *)(this[962] + 211);
      v9 = 25;
      sub_100C1DB0(v8, &v9);
      sub_100C34C0((float *)this[962] + 200, 0.5, 0.5, 0.5);
      sub_102BC090((float *)this[962] + 203, 0.0, 0.0, 0.0);
      sub_100F5880(this[962], 500.0);
      sub_10284B60((int)this[962], (int)this, 0);
    }
  }
}
