int __thiscall sub_1008F640(char *this, int a2)
{
  float *v3; // edi
  float *v4; // edi
  float *v5; // esi
  int result; // eax

  v3 = (float *)(this + 8);
  *((_DWORD *)this + 1) = a2;
  (*(void (__thiscall **)(char *, char *))(*(_DWORD *)this + 72))(this, this + 8);
  *v3 = 0.0;
  v3[1] = 0.0;
  v3[2] = 0.0;
  (*(void (__thiscall **)(char *, char *))(*(_DWORD *)this + 72))(this, this + 20);
  *((float *)this + 5) = 0.0;
  *((float *)this + 6) = 0.0;
  *((float *)this + 7) = 0.0;
  *((float *)this + 8) = 0.0;
  if ( this[42] )
  {
    (*(void (__thiscall **)(char *, char *))(*(_DWORD *)this + 72))(this, this + 42);
    this[42] = 0;
  }
  if ( this[36] || this[37] )
  {
    (*(void (__thiscall **)(char *, char *))(*(_DWORD *)this + 72))(this, this + 36);
    *((_WORD *)this + 18) = 0;
  }
  if ( this[41] )
  {
    (*(void (__thiscall **)(char *, char *))(*(_DWORD *)this + 72))(this, this + 41);
    this[41] = 0;
  }
  if ( this[40] )
  {
    (*(void (__thiscall **)(char *, char *))(*(_DWORD *)this + 72))(this, this + 40);
    this[40] = 0;
  }
  v4 = (float *)(this + 44);
  *((float *)this + 17) = flt_10459240;
  *((_QWORD *)this + 9) = qword_10459244;
  *((float *)this + 20) = flt_10459240;
  *(_QWORD *)(this + 84) = qword_10459244;
  (*(void (__thiscall **)(char *, char *))(*(_DWORD *)this + 72))(this, this + 44);
  *((float *)this + 11) = 0.0;
  v5 = (float *)(this + 56);
  v4[1] = 0.0;
  v4[2] = 0.0;
  result = (*(int (__thiscall **)(float *, float *))(*((_DWORD *)v5 - 14) + 72))(v5 - 14, v5);
  *v5 = 0.0;
  v5[1] = 0.0;
  v5[2] = 0.0;
  return result;
}
