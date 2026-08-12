char __thiscall sub_102F4160(unsigned int *this, _DWORD *a2)
{
  char *v2; // eax
  char result; // al
  int v5; // eax

  v2 = (char *)dword_106E2788;
  if ( a2[23] == dword_106E2788 )
    goto LABEL_5;
  if ( !dword_106E2788 )
    v2 = (char *)String;
  result = sub_100D6240(a2, v2);
  if ( result )
  {
LABEL_5:
    v5 = sub_100CF460(this);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 996))(v5, 0);
    result = sub_100CD300(this, 0);
    this[698] = 3;
  }
  return result;
}
