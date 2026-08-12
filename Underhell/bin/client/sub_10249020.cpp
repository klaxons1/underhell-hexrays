_DWORD *__thiscall sub_10249020(int this, _DWORD *a2)
{
  int v3; // eax
  const char *v4; // eax

  sub_1023B220((_DWORD *)this, a2);
  if ( *(_DWORD *)(this + 212) )
    sub_1022ABA0(a2, "image", *(const char **)(this + 212));
  if ( *(_DWORD *)(this + 216) )
    sub_1022ABA0(a2, "fillcolor", *(const char **)(this + 216));
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 256))(this) )
  {
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 256))(this);
    v4 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 24))(v3);
    sub_1022ABA0(a2, "border", v4);
  }
  sub_1022ACA0(a2, "scaleImage", *(unsigned __int8 *)(this + 220));
  sub_1022ACC0(a2, "scaleAmount", *(float *)(this + 224));
  sub_1022ACA0(a2, "tileImage", *(unsigned __int8 *)(this + 221));
  sub_1022ACA0(a2, "tileHorizontally", *(unsigned __int8 *)(this + 222));
  return sub_1022ACA0(a2, "tileVertically", *(unsigned __int8 *)(this + 223));
}
