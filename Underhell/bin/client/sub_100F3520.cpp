_DWORD *__stdcall sub_100F3520(_DWORD *a1)
{
  int v1; // eax
  _DWORD *result; // eax
  int v3; // edx
  int v4; // ecx
  _DWORD *v5; // eax
  int v6; // edx
  int v7; // eax

  v1 = sub_100422D0();
  if ( v1 )
  {
    v5 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v1 + 268))(v1);
    *a1 = *v5;
    v6 = v5[1];
    v7 = v5[2];
    a1[1] = v6;
    a1[2] = v7;
    return a1;
  }
  else
  {
    result = a1;
    v3 = qword_10459244;
    *a1 = LODWORD(flt_10459240);
    v4 = HIDWORD(qword_10459244);
    a1[1] = v3;
    a1[2] = v4;
  }
  return result;
}
