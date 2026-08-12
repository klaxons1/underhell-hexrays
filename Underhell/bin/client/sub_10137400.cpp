int __thiscall sub_10137400(int this, int a2)
{
  int v3; // eax
  int v4; // edx
  int result; // eax

  sub_10136DD0((float *)this, (float **)(a2 + 868));
  (*(void (__stdcall **)(_DWORD))(*(_DWORD *)off_103DCDDC + 4))(*(unsigned __int16 *)(a2 + 8));
  *(float *)(a2 + 12) = 0.0;
  *(float *)(a2 + 16) = 0.0;
  *(float *)(a2 + 20) = 0.0;
  *(float *)(a2 + 24) = 0.0;
  *(float *)(a2 + 28) = 0.0;
  *(float *)(a2 + 32) = 0.0;
  *(_DWORD *)(a2 + 48) = 0;
  *(float *)(a2 + 884) = 1.0;
  *(_DWORD *)(a2 + 52) = 0;
  *(_DWORD *)(a2 + 868) = 0;
  *(_WORD *)(a2 + 8) = -1;
  *(_BYTE *)(a2 + 880) = 0;
  *(_DWORD *)(a2 + 36) = 0;
  v3 = *(_DWORD *)(this + 12);
  if ( v3 >= 32 )
    return (**(int (__thiscall ***)(int, int))a2)(a2, 1);
  v4 = *(_DWORD *)(this + 8);
  result = v3 + 1;
  *(_DWORD *)(this + 12) = result;
  *(_DWORD *)(a2 + 44) = v4;
  *(_DWORD *)(this + 8) = a2;
  return result;
}
