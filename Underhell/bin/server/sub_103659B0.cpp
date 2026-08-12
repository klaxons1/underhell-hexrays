void __thiscall sub_103659B0(int this)
{
  char *v2; // eax
  _DWORD *v3; // eax
  float *v4; // eax
  float v5[3]; // [esp+4h] [ebp-Ch] BYREF

  sub_10365820(this);
  v2 = *(char **)(this + 3776);
  *(float *)(this + 3768) = *(float *)(this + 1684);
  *(float *)(this + 3772) = -1.0;
  if ( v2 )
  {
    v3 = sub_1012BF20(&dword_1069E3E0, 0, v2, 0, 0, 0, 0);
    if ( v3 )
    {
      v4 = (float *)(*(int (__thiscall **)(_DWORD *))(*v3 + 576))(v3);
      v5[0] = *v4;
      v5[1] = v4[1];
      v5[2] = v4[2] + 8.0;
      sub_1025F370((void *)this, v5, 0);
    }
    else
    {
      sub_100D6390((_DWORD *)this);
      sub_10029660((_DWORD *)this, (int)"Enemyfinder %s can't snap to %s because it doesn't exist\n");
    }
  }
}
