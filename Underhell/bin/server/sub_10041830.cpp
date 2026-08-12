int __thiscall sub_10041830(_DWORD *this, const char **a2)
{
  _DWORD *v3; // ebx
  const char *v4; // eax
  const char *v5; // edi
  const char *v6; // eax
  const char *v8; // [esp-4h] [ebp-14h]
  int v9; // [esp+Ch] [ebp-4h]

  v3 = this + 631;
  v9 = sub_10035070(this + 631, this[634]);
  if ( *(_DWORD *)(dword_1069076C + 48) )
  {
    v4 = *a2;
    if ( !*a2 )
      v4 = String;
    v5 = (const char *)this[23];
    if ( !v5 )
      v5 = String;
    v8 = v4;
    v6 = (const char *)sub_100D6390(this);
    Msg("%s(%s): Added dynamic interaction: %s\n", v5, v6, v8);
  }
  qmemcpy((void *)(164 * v9 + *v3), a2, 0xA4u);
  return sub_10425A30(a2 + 4, a2 + 7);
}
