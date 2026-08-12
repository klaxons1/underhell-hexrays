int __userpurge sub_101A2150@<eax>(
        int a1@<ecx>,
        int a2@<esi>,
        float *a3,
        float *a4,
        float *a5,
        float *a6,
        int a7,
        int a8,
        float a9,
        char a10)
{
  int result; // eax
  int v11; // esi
  int savedregs; // [esp+10h] [ebp+0h] BYREF

  result = sub_100CB0B0(a1, (int)&savedregs, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  v11 = result;
  if ( result )
  {
    sub_1023C380((int)"NPC_Butcher.Melee", 0.0, 0);
    return v11;
  }
  return result;
}
