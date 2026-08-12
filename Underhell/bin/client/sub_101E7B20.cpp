char *__thiscall sub_101E7B20(_DWORD *this)
{
  char *v2; // eax
  char *v3; // esi
  int v5; // [esp-8h] [ebp-14h]
  char *v6; // [esp+8h] [ebp-4h] BYREF

  v2 = (char *)sub_100DDA40(380);
  if ( v2 )
    v3 = sub_101E5C40(v2, (int)this);
  else
    v3 = 0;
  v5 = this[4];
  v6 = v3;
  sub_10258C50(v5, &v6);
  return v3;
}
