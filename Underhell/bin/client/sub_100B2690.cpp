int __thiscall sub_100B2690(int this, float *a2, float *a3, float *a4)
{
  int result; // eax
  _BYTE *v6; // edi
  float *v7; // eax
  float *v8; // eax
  int (*v9)(void); // eax
  float *v10; // eax
  double v11; // st7
  float *v12; // eax

  result = sub_1012D2F0(*(_DWORD *)(this + 40));
  v6 = (_BYTE *)result;
  if ( result )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)result + 500))(result) )
    {
      v7 = (float *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 536))(v6);
      *(float *)(this + 28) = *v7;
      *(float *)(this + 32) = v7[1];
      *(float *)(this + 36) = v7[2];
      v8 = (float *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 36))(v6);
      *(float *)(this + 16) = *v8;
      *(float *)(this + 20) = v8[1];
      *(float *)(this + 24) = v8[2];
      *(float *)(this + 48) = ((double (__thiscall *)(_BYTE *))*(_DWORD *)(*(_DWORD *)v6 + 952))(v6);
      v9 = *(int (**)(void))(*(_DWORD *)dword_10412D50 + 120);
      if ( (v6[732] & 2) != 0 )
      {
        v10 = (float *)v9();
        *(float *)(this + 16) = v10[15] + *(float *)(this + 16);
        *(float *)(this + 20) = v10[16] + *(float *)(this + 20);
        v11 = v10[17];
      }
      else
      {
        v12 = (float *)v9();
        *(float *)(this + 16) = *v12 + *(float *)(this + 16);
        *(float *)(this + 20) = v12[1] + *(float *)(this + 20);
        v11 = v12[2];
      }
      *(float *)(this + 24) = v11 + *(float *)(this + 24);
      *a2 = *(float *)(this + 16);
      a2[1] = *(float *)(this + 20);
      a2[2] = *(float *)(this + 24);
      *a3 = *(float *)(this + 28);
      a3[1] = *(float *)(this + 32);
      a3[2] = *(float *)(this + 36);
      *a4 = *(float *)(this + 48);
      (*(void (__thiscall **)(_BYTE *, float *, float *))(*(_DWORD *)v6 + 804))(v6, a2, a3);
      result = sub_10045780(v6, 0);
      if ( result )
        return sub_10039310(result);
    }
    else
    {
      return sub_100B21A0(this, a2, a3, (int)a4);
    }
  }
  return result;
}
