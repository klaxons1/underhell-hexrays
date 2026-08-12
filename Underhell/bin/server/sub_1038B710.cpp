int __thiscall sub_1038B710(_DWORD *this, int a2, int a3)
{
  int result; // eax
  int v5; // [esp+Ch] [ebp-A4h] BYREF
  float v6; // [esp+10h] [ebp-A0h]
  int v7; // [esp+14h] [ebp-9Ch]
  int v8; // [esp+18h] [ebp-98h]
  int v9; // [esp+1Ch] [ebp-94h]
  int v10; // [esp+20h] [ebp-90h]
  char v11; // [esp+24h] [ebp-8Ch]
  int v12; // [esp+28h] [ebp-88h]
  char v13; // [esp+2Ch] [ebp-84h]
  int v14; // [esp+ACh] [ebp-4h]

  (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, a2);
  if ( dword_106EA0D8 <= 0 || dword_106EA0D4 <= 0 )
  {
    v6 = 1.0;
    v5 = 0;
    v7 = 100;
    v8 = 100;
    v9 = 100;
    v10 = 75;
    v13 = 0;
    v11 = 0;
    v12 = 0;
    v14 = 0;
    if ( (unsigned __int8)sub_1023A760(a3, (int)&v5, 0) )
    {
      flt_10676854 = v6;
      dword_10676858 = v10;
      dword_106EA0D8 = v8;
      dword_106EA0D4 = v9;
    }
  }
  result = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 1);
  if ( result )
  {
    result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(
               dword_106B31E4,
               dword_106EA0D8,
               dword_106EA0D4);
    this[2] = result;
  }
  else
  {
    this[2] = 100;
  }
  return result;
}
