char *__thiscall sub_1041E150(int *this)
{
  char *v2; // eax
  char *v3; // esi
  int v5; // [esp-8h] [ebp-14h]
  char *v6; // [esp+8h] [ebp-4h] BYREF

  v2 = (char *)sub_10184390(380);
  if ( v2 )
    v3 = sub_1041C4B0(v2, (int)this);
  else
    v3 = 0;
  v5 = this[4];
  v6 = v3;
  sub_1041DA00(this + 1, v5, &v6);
  return v3;
}
