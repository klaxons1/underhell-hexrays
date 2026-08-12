float *__thiscall sub_10035AD0(float *this, float *a2, float *a3)
{
  int v4; // eax
  float *v5; // ebx
  float *v6; // ecx
  float *v7; // eax
  float *result; // eax
  double v9; // st7
  float *v10; // ecx
  int v11; // eax
  int v12; // esi
  int v13; // eax
  int v14; // [esp-10h] [ebp-18h]

  v4 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413178 + 36))(dword_10413178, *((_DWORD *)this + 22));
  if ( v4 == 3 || v4 == 1 )
  {
    v12 = *(_DWORD *)dword_10413178;
    v13 = (*(int (__thiscall **)(float *, float *, float *))(*(_DWORD *)this + 36))(this, a2, a3);
    return (float *)(*(int (__thiscall **)(int, int))(v12 + 28))(dword_10413178, v13);
  }
  else
  {
    v5 = (float *)(*(int (__thiscall **)(_DWORD *))(*((_DWORD *)this + 87) + 36))((_DWORD *)this + 87);
    v6 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 8))(this);
    if ( *v6 == *v5 && v6[1] == v5[1] && v6[2] == v5[2] )
    {
      v7 = (float *)(*(int (__thiscall **)(_DWORD *))(*((_DWORD *)this + 87) + 4))((_DWORD *)this + 87);
      *a2 = *v7;
      a2[1] = v7[1];
      a2[2] = v7[2];
      result = (float *)(*(int (__thiscall **)(_DWORD *))(*((_DWORD *)this + 87) + 8))((_DWORD *)this + 87);
      v9 = *result;
      v10 = a3;
LABEL_7:
      *v10 = v9;
      v10[1] = result[1];
      v10[2] = result[2];
      return result;
    }
    if ( 0.0 == this[95] )
    {
      result = a3;
      v10 = a2;
      *a3 = flt_10459240;
      a3[1] = flt_10459244;
      a3[2] = flt_10459248;
      v9 = *a3;
      goto LABEL_7;
    }
    sub_10037F50(this - 1);
    v14 = (*(int (__thiscall **)(_DWORD *))(*((_DWORD *)this + 87) + 8))((_DWORD *)this + 87);
    v11 = (*(int (__thiscall **)(_DWORD *))(*((_DWORD *)this + 87) + 4))((_DWORD *)this + 87);
    return (float *)sub_101F1180(this + 164, v11, v14, a2, a3);
  }
}
