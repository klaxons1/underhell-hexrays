int __thiscall sub_101E5E40(int *this, float *a2, char a3, char a4)
{
  int v4; // edi
  int v7; // ebx
  int (__thiscall *v8)(int *); // edx
  _DWORD *v9; // eax
  int v10; // edx
  int (__thiscall *v11)(int *); // eax
  float *v12; // eax
  _DWORD v13[20]; // [esp+8h] [ebp-50h] BYREF

  v4 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !(*(unsigned __int8 (__thiscall **)(int *))(*this + 264))(this)
    || *(float *)(dword_106B31C8 + 12) < (double)*((float *)this + 887) && !a4 )
  {
    return (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 104))(v4);
  }
  v7 = this[55];
  *((float *)this + 887) = *(float *)(dword_106B31C8 + 12) + 5.0;
  sub_10247EC0(v13);
  v8 = *(int (__thiscall **)(int *))(*this + 8);
  *(float *)&v13[13] = (float)(v7 + 10);
  v9 = (_DWORD *)v8(this);
  v10 = *this;
  v13[11] = *v9;
  *(float *)&v13[1] = *a2;
  v13[16] = a3 != 0 ? 0x2000 : 0;
  *(float *)&v13[2] = a2[1];
  v11 = *(int (__thiscall **)(int *))(v10 + 576);
  *(float *)&v13[3] = a2[2];
  v12 = (float *)v11(this);
  *(float *)&v13[4] = *v12;
  *(float *)&v13[5] = v12[1];
  *(float *)&v13[6] = v12[2];
  sub_100D9E70(this, (int)this, v13);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 104))(v4);
}
