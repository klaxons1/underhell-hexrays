float *__thiscall sub_1008FCF0(int *this, int a2, float *a3, float *a4)
{
  _BYTE *v5; // edi
  int v6; // ecx
  int v7; // esi
  unsigned __int16 v8; // ax
  float *result; // eax

  v5 = this + 10;
  if ( (_BYTE)a2 != *((_BYTE *)this + 40) )
  {
    (*(void (__thiscall **)(int *, int *))(*this + 72))(this, this + 10);
    *v5 = a2;
  }
  if ( a2 == 3 )
  {
    sub_1008E750((float *)this + 11, a3);
    result = sub_1008E7B0((float *)this + 14, a4);
    this[17] = *(int *)a3;
    this[18] = *((int *)a3 + 1);
    this[19] = *((int *)a3 + 2);
    this[20] = *(int *)a4;
    this[21] = *((int *)a4 + 1);
    this[22] = *((int *)a4 + 2);
  }
  else
  {
    *(_DWORD *)(this[1] + 312) |= 0x4000u;
    sub_1008F420(this);
    v6 = this[1];
    v7 = *(_DWORD *)off_103DD080;
    v8 = (*(int (__thiscall **)(int))(*(_DWORD *)(v6 + 4) + 28))(v6 + 4);
    return (float *)(*(int (__thiscall **)(void *, _DWORD))(v7 + 140))(off_103DD080, v8);
  }
  return result;
}
