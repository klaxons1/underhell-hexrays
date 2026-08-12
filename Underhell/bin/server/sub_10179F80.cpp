int __thiscall sub_10179F80(int this)
{
  char *v2; // eax
  char *v3; // eax
  char *v4; // eax
  char *v5; // eax
  float v7; // [esp+0h] [ebp-Ch]

  sub_100E38F0((float *)this);
  v2 = *(char **)(this + 800);
  if ( !v2 )
    v2 = (char *)String;
  sub_101797B0((_DWORD *)this, v2);
  v3 = *(char **)(this + 804);
  if ( !v3 )
    v3 = (char *)String;
  sub_10179860((_DWORD *)this, v3);
  v4 = *(char **)(this + 212);
  if ( !v4 )
    v4 = (char *)String;
  sub_101798F0((_DWORD *)this, v4);
  v5 = *(char **)(this + 808);
  if ( !v5 )
    v5 = (char *)String;
  sub_10179980((_DWORD *)this, v5);
  sub_100EC3F0((_DWORD *)this, (int)sub_10179A10, 0.0, 0);
  v7 = *(float *)(dword_106B31C8 + 28) + *(float *)(dword_106B31C8 + 12);
  return sub_100EC4A0((int *)this, v7, 0);
}
