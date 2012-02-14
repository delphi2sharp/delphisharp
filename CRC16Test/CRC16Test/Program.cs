using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;

namespace CRC16Test
{
    class Program
    {
        static void Main(string[] args)
        {

            byte[] data = UTF8Encoding.UTF8.GetBytes("Testing");

            CRC16 crc16 = new CRC16();

            byte[] checksum;

            checksum = crc16.ComputeChecksumBytes(data);

            string hex = BitConverter.ToInt16(checksum, 0).ToString("X");

            Console.WriteLine(hex);
            Console.WriteLine(checksum[0]);
            Console.WriteLine(checksum[1]);
            
            //outputs:
            //9DBF    -- which matches http://www.lammertbies.nl/comm/info/crc-calculation.html
            //191
            //157

            Thread.Sleep(100000);

        }
    }
}
