void __thiscall sub_100136E0(float *this, float *a2, float *a3, float *a4)
{
  float *v5; // eax
  float *v6; // eax
  double (__thiscall *v7)(float *); // eax
  _BYTE v8[12]; // [esp+14h] [ebp-18h] BYREF
  float v9[3]; // [esp+20h] [ebp-Ch] BYREF

  if ( !(*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)off_103ED0FC + 56))(off_103ED0FC) )
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10439968 + 76))(dword_10439968);
  v5 = (float *)(*(int (__thiscall **)(float *, _BYTE *))(*(_DWORD *)this + 532))(this, v8);
  *a2 = *v5;
  a2[1] = v5[1];
  a2[2] = v5[2];
  v6 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 536))(this);
  *a3 = *v6;
  a3[1] = v6[1];
  a3[2] = v6[2];
  if ( !(*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)off_103ED0FC + 56))(off_103ED0FC) )
    sub_100134B0(this, (int)a2);
  sub_100128E0(this, (int)a3);
  *a3 = *a3 + this[892];
  a3[1] = this[893] + a3[1];
  a3[2] = this[894] + a3[2];
  if ( !(*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)off_103ED0FC + 56))(off_103ED0FC) )
  {
    ((void (__thiscall *)(void ***))(*off_103E77E8)[7])(off_103E77E8);
    ((void (__stdcall *)(float *, float *, _DWORD))(*off_103E77E8)[8])(a2, a3, 1.0);
  }
  sub_10043310(v9);
  *a2 = *a2 + v9[0];
  a2[1] = v9[1] + a2[1];
  a2[2] = a2[2] + v9[2];
  v7 = *(double (__thiscall **)(float *))(*(_DWORD *)this + 952);
  this[1023] = 0.0;
  *a4 = v7(this);
}
