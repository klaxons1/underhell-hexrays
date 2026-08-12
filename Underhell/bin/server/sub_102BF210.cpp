int *__thiscall sub_102BF210(int *this)
{
  double v1; // st7
  double v3; // st6
  int v4; // ecx
  int v5; // ecx
  const char *v6; // eax
  int *result; // eax
  float v8; // [esp+Ch] [ebp-14h]
  float v9; // [esp+Ch] [ebp-14h]
  int v10; // [esp+10h] [ebp-10h]
  float v11; // [esp+1Ch] [ebp-4h]

  v1 = flt_1060B428;
  v3 = flt_1060B430;
  if ( (flt_1060B428 < (double)*(float *)(dword_106B31C8 + 12)
     || (dword_1060B42C == -1 || off_1061BE18[4 * (dword_1060B42C & 0xFFF) + 2] != (unsigned int)dword_1060B42C >> 12
       ? (v4 = 0)
       : (v4 = off_1061BE18[4 * (dword_1060B42C & 0xFFF) + 1]),
         (int *)v4 == this))
    && (v3 < *(float *)(dword_106B31C8 + 12)
     || (dword_1060B434 == -1 || off_1061BE18[4 * (dword_1060B434 & 0xFFF) + 2] != (unsigned int)dword_1060B434 >> 12
       ? (v5 = 0)
       : (v5 = off_1061BE18[4 * (dword_1060B434 & 0xFFF) + 1]),
         (int *)v5 == this)) )
  {
    v6 = (const char *)this[203];
    if ( !v6 )
      v6 = String;
    v10 = (int)v6;
    (*(void (__thiscall **)(int *))(*this + 216))(this);
    v8 = ((double (__stdcall *)(_DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           *((float *)this + 200),
           *((float *)this + 201),
           0)
       + *(float *)(dword_106B31C8 + 12);
    sub_100EC4A0(this, v8, v10);
    flt_1060B428 = *(float *)(dword_106B31C8 + 12) + 5.0;
    dword_1060B42C = *(_DWORD *)(*(int (__thiscall **)(int *))(*this + 8))(this);
    flt_1060B430 = *(float *)(dword_106B31C8 + 12) + 5.0;
    result = (int *)(*(int (__thiscall **)(int *))(*this + 8))(this);
    dword_1060B434 = *result;
  }
  else
  {
    if ( v3 >= v1 )
      v1 = flt_1060B430;
    v11 = v1;
    v9 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           0.0,
           1.0)
       + v11;
    return (int *)sub_100EC4A0(this, v9, 0);
  }
  return result;
}
