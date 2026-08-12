int __cdecl sub_1028A660(
        int a1,
        float a2,
        __int16 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        float a9,
        float a10,
        float a11,
        float a12,
        float a13)
{
  if ( dword_106D5C28 != (a3 & 0xFFF | 0x1000) )
    dword_106D5C28 = a3 & 0xFFF | 0x1000;
  if ( dword_106D5BEC != a4 )
    dword_106D5BEC = a4;
  if ( dword_106D5BF0 != a5 )
    dword_106D5BF0 = a5;
  if ( dword_106D5BF4 )
    dword_106D5BF4 = 0;
  if ( dword_106D5BF8 )
    dword_106D5BF8 = 0;
  if ( dword_106D5BFC != a6 )
    dword_106D5BFC = a6;
  if ( dword_106D5C00 != a7 )
    dword_106D5C00 = a7;
  if ( dword_106D5C04 != a8 )
    dword_106D5C04 = a8;
  if ( dword_106D5C08 != (int)a9 )
    dword_106D5C08 = (int)a9;
  if ( dword_106D5C10 != (int)a10 )
    dword_106D5C10 = (int)a10;
  if ( dword_106D5C14 != (int)a11 )
    dword_106D5C14 = (int)a11;
  if ( dword_106D5C18 != (int)a12 )
    dword_106D5C18 = (int)a12;
  if ( dword_106D5C1C != (int)a13 )
    dword_106D5C1C = (int)a13;
  return sub_102823A0((int (__thiscall ***)(_DWORD))&dword_106D5BE0, a1, a2);
}
