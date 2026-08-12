int __thiscall sub_10270D30(int this)
{
  int v2; // edi
  int v3; // ebx
  _DWORD *v4; // eax
  int result; // eax
  int v6; // [esp+Ch] [ebp-Ch] BYREF
  int v7; // [esp+10h] [ebp-8h] BYREF
  _BYTE v8[4]; // [esp+14h] [ebp-4h] BYREF

  sub_102361D0((int (__thiscall ***)(void *, int, int))this, (int)&v7, (int)&v6);
  v2 = dword_1047CA6C;
  v3 = *(_DWORD *)dword_1047CA6C;
  v4 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 228))(this, v8);
  (*(void (__thiscall **)(int, _DWORD))(v3 + 40))(v2, *v4);
  result = *(_DWORD *)(this + 212);
  switch ( result )
  {
    case 0:
      result = (*(int (__thiscall **)(int, _DWORD, _DWORD, int, int))(*(_DWORD *)dword_1047CA6C + 48))(
                 dword_1047CA6C,
                 0,
                 0,
                 (int)((double)v7 * *(float *)(this + 216)),
                 v6);
      break;
    case 1:
      result = (*(int (__thiscall **)(int, int, _DWORD, int, int))(*(_DWORD *)dword_1047CA6C + 48))(
                 dword_1047CA6C,
                 (int)((1.0 - *(float *)(this + 216)) * (double)v7),
                 0,
                 v7,
                 v6);
      break;
    case 2:
      result = (*(int (__thiscall **)(int, _DWORD, int, int, int))(*(_DWORD *)dword_1047CA6C + 48))(
                 dword_1047CA6C,
                 0,
                 (int)((1.0 - *(float *)(this + 216)) * (double)v6),
                 v7,
                 v6);
      break;
    case 3:
      result = (*(int (__thiscall **)(int, _DWORD, _DWORD, int, int))(*(_DWORD *)dword_1047CA6C + 48))(
                 dword_1047CA6C,
                 0,
                 0,
                 v7,
                 (int)((double)v6 * *(float *)(this + 216)));
      break;
    default:
      return result;
  }
  return result;
}
