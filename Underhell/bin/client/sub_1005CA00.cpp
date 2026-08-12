void __thiscall sub_1005CA00(int this)
{
  long double v2; // st7
  float *v3; // esi
  float v4; // [esp+0h] [ebp-10h]
  float v5; // [esp+4h] [ebp-Ch]
  float v6; // [esp+Ch] [ebp-4h]

  if ( (*(_BYTE *)(this + 1204) & 1) != 0 )
  {
    sub_1005C900((float *)this);
    sub_1005C510((char *)this);
    v6 = *(float *)(this + 1220) - *(float *)(this + 10400);
    *(float *)(this + 10400) = *(float *)(this + 1220);
    v2 = (sin(*((float *)off_103DC81C + 3) * 2000.0) * 0.5
        + sin(*((float *)off_103DC81C + 3) * 10000.0)
        - 0.5 * cos(*((float *)off_103DC81C + 3) * 8000.0))
       * 0.1
       + *(float *)(this + 1220) * 1.5;
    if ( v2 < 0.0000001 )
      v2 = 0.0000001;
    v3 = (float *)(this + 9112);
    v4 = v2;
    sub_10123F00(v4, COERCE_INT(0.0));
    v5 = sub_10034A10(v3, 2) + v6 * 32.0;
    sub_10034AA0(v3, 2, v5);
  }
}
