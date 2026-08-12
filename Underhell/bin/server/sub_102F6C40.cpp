bool __thiscall sub_102F6C40(int this, char a2)
{
  int v3; // eax
  int v4; // eax
  bool result; // al

  result = !*(_BYTE *)(this + 2680)
        && (v3 = *(_DWORD *)(this + 2324), v3 != 3)
        && v3 != 4
        && (v4 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 1656))(this),
            !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4))
        && (!a2 || !sub_102EBE70(this, 500.0))
        && !sub_10295590((_BYTE *)(this + 5144))
        && !sub_1004BD10((_DWORD **)(this + 5264))
        && (0.0 == *(float *)(this + 2744) || *(float *)(dword_106B31C8 + 12) - *(float *)(this + 2744) >= 2.0)
        && !sub_100697A0((_DWORD *)this, 51, 0)
        && *(float *)(this + 5716) <= (double)*(float *)(dword_106B31C8 + 12);
  return result;
}
